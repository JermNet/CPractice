// Define a union named 'Data'
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};
 
int main() {
    // Declare a variable of type 'Data'
    union Data data;
 
    // Display memory addresses of union members
    printf("Memory Address of 'intValue': %p\n", (void*)&data.intValue);
    printf("Memory Address of 'floatValue': %p\n", (void*)&data.floatValue);
    printf("Memory Address of 'stringValue': %p\n", (void*)&data.stringValue);
 
    return 0;
}