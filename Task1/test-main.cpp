#include <iostream>
#include "List.h"
#include "Catch2/catch_test_macros.hpp"
#include "Catch2/catch_session.hpp"
#include "Catch2/catch_approx.hpp"

TEST_CASE("ListCheck", "[CheckList easy]"){
    List CheckList;
    SECTION("Is empty"){
        CHECK (CheckList.Empty() == true);
    }

    SECTION("Check Size"){
        CheckList.PushBack(0);
        CheckList.PushBack(1);
        CheckList.PushBack(2);        
        CHECK (CheckList.Size() == 3);
    }

    SECTION("Clear"){
        CheckList.Clear();
        CHECK (CheckList.Empty() == true);        
    }
}

int main(){
    return Catch::Session().run();
}