void print_char(char c);

void my_print_ascii(void)
{
            int indice = 33;
            while (32 < indice && indice < 127){
            print_char(indice);
            indice++;
            }
}
