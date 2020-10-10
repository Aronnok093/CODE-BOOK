
#include<stdio.h>
void main()
{
    long loc;
    char ch;
    FILE *in, *out;
    in = fopen("f1.txt", "rb");   // must create new file name f1.txt
    out = fopen("f2.txt", "wb");
    fseek( in,-1, SEEK_END);
    loc = ftell(in);
    while(loc >= 0 )
    {
        fseek(in, loc, SEEK_SET );
        ch = fgetc(in);
        fputc(ch, out);
        loc--;
    }
    fclose(in);
    fclose(out);
}
