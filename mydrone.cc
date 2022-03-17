#include "mydrone.h"

Define_Module(Mydrone);

void Mydrone::initialize()
{
    // TODO - Generated method body

    if(strcmp(getName(),"mydrone1")==0){
        cMessage *msg=new cMessage("HELLO this is mydrone1");
        send(msg,"out");
    }
}

void Mydrone::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
}
