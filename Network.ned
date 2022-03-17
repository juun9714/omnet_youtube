network Network
{
    @display("bgb=626,326");
    submodules:
        mydrone1: Mydrone {
            @display("p=91,132");
        }
        mydrone2: Mydrone {
            @display("p=496,132");
        }
        server1: Server {
            @display("p=303,234");
        }
    connections:
        server1.out1 --> mydrone1.in;
        mydrone1.out --> server1.in1;
        server1.out2 --> mydrone2.in;
        mydrone2.out --> server1.in2;
}
