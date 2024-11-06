#include <direct.h>
#include <stdio.h>

int main()
{
    const char *dirName = "yeni_klasor";

    if (_mkdir(dirName) == 0)
    {
        printf("Klasör başarıyla oluşturuldu: %s\n", dirName);
    }
    else
    {
        perror("Klasör oluşturulamadı");
    }

    return 0;
}
