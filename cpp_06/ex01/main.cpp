#include "Serializer.hpp"

int main(){

    Data data;
    data.pff = "salam\n";
    uintptr_t ptr = Serializer::serialize(&data);


    std::cout <<"Serialized   : " <<  ptr << std::endl;
    std::cout <<"Data address : " << &data << std::endl;
    std::cout <<"Deserialized : " <<  Serializer::deserialize(ptr) << std::endl;

    return 0;
}