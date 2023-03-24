# include <stdio.h>
# include <stdbool.h>


int main(){
bool have_nid = false;
bool is_adult = false;
bool has_passport = true;

// bool is_permitted = has_identitiy && is_adult;

bool is_permitted =(have_nid || has_passport)&& is_adult;


printf("permission - %d\n",!is_permitted);


    return 0;
}