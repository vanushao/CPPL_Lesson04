#include <iostream>
#include "List.h"
#include "Catch2/catch_test_macros.hpp"
#include "Catch2/catch_session.hpp"
#include "Catch2/matchers/catch_matchers.hpp"

TEST_CASE("ListCheck_First", "[CheckList First]"){
    List CheckList;
    SECTION("Is empty"){
        CHECK (CheckList.Empty() == true);
    }

    SECTION("Check Size"){
        CHECK_NOTHROW (CheckList.PushBack(0));
        CHECK_NOTHROW (CheckList.PushBack(1));
        CHECK_NOTHROW (CheckList.PushBack(2));
        CHECK (CheckList.Size() == 3);
    }

    SECTION("Clear"){
        CHECK_NOTHROW (CheckList.Clear());
        CHECK (CheckList.Empty() == true);        
    }
}

TEST_CASE("ListCheck_Second", "[CheckList second]"){
    List CheckList;
    SECTION("Push_Pop_Front"){
        CHECK_NOTHROW (CheckList.Clear());
        CHECK (CheckList.Empty() == true);        
        CHECK_NOTHROW (CheckList.PushFront(0));
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PushFront(1));
        CHECK (CheckList.Size() == 2);
        CHECK_NOTHROW (CheckList.PopFront());
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PopFront());
        CHECK (CheckList.Size() == 0);
        CHECK_THROWS_WITH(CheckList.PopFront(), "list is empty");
    }

    SECTION("Push_Pop_Back"){
        CHECK_NOTHROW (CheckList.Clear());
        CHECK (CheckList.Empty() == true);        
        CHECK_NOTHROW (CheckList.PushBack(0));
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PushBack(1));
        CHECK (CheckList.Size() == 2);
        CHECK_NOTHROW (CheckList.PopBack());
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PopBack());
        CHECK (CheckList.Size() == 0);
        CHECK_THROWS_WITH(CheckList.PopBack(), "list is empty");
    }

    SECTION("Push_Front_Pop_Back"){
        CHECK_NOTHROW (CheckList.Clear());
        CHECK (CheckList.Empty() == true);        
        CHECK_NOTHROW (CheckList.PushFront(0));
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PushFront(1));
        CHECK (CheckList.Size() == 2);
        CHECK_NOTHROW (CheckList.PopBack());
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PopBack());
        CHECK (CheckList.Size() == 0);
        CHECK_THROWS_WITH(CheckList.PopBack(), "list is empty");
    }

    SECTION("Push_Back_Pop_Front"){
        CHECK_NOTHROW (CheckList.Clear());
        CHECK (CheckList.Empty() == true);        
        CHECK_NOTHROW (CheckList.PushBack(0));
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PushBack(1));
        CHECK (CheckList.Size() == 2);
        CHECK_NOTHROW (CheckList.PopFront());
        CHECK (CheckList.Size() == 1);
        CHECK_NOTHROW (CheckList.PopFront());
        CHECK (CheckList.Size() == 0);
        CHECK_THROWS_WITH(CheckList.PopFront(), "list is empty");
    }    
}


int main(){
    return Catch::Session().run();
}