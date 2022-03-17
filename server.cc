#include "server.h"

Define_Module(Server);

void Server::initialize()
{
    // TODO - Generated method body
}

void Server::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    cGate *arrivalGate=msg->getArrivalGate();

    if(arrivalGate==gate("in1")){
        std::string mes=msg->getFullName();

        char revString[mes.size()];
        //reverse?
        int max=mes.size()-1;
        for(int i=0;i<mes.size();i++){
            revString[max--]=mes.at(i);
        }
        cMessage *Rmsg=new cMessage(revString);
        send(Rmsg,"out2");
    }
}
