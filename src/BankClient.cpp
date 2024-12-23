#include "bankC.h"
#include <iostream>
int main(int argc, char *argv[])
{
    try
    {
        // Initialize the ORB.
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
        // Read and destringify the Messenger object's IOR.
        CORBA::Object_var obj = orb->string_to_object("file://Bank.ior");
        if (CORBA::is_nil(obj.in()))
        {
            std::cerr << "Could not get Messenger IOR." << std::endl;
            return 1;
        }
        // Narrow the IOR to a Messenger object reference.
        Bank::Transaction_var messenger = Bank::Transaction::_narrow(obj.in());
        if (CORBA::is_nil(messenger.in()))
        {
            std::cerr << "IOR was not a Messenger object reference." << std::endl;
            return 1;
        }
        // Send a message the the Messenger object.
        CORBA::String_var msg = CORBA::string_dup("Hello!");
        messenger->updateDetails("TAO User", "Test", 22.2, 5.5, "u");
        // Print the Messenger's reply.
        std::cout << "Reply: " << msg.in() << std::endl;
        orb->destroy ();
        return 0;
    }
    catch (CORBA::Exception &ex)
    {
        std::cerr << "MessengerClient CORBA exception: " << ex << std::endl;
    }
    return 1;
}