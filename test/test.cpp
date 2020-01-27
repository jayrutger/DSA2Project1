#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../nameloader.hpp"
#include <string>

const std::string TITLE     = "The Wave";
const std::string AUTHOR    = "Krazy George";
const std::string SUBJECT   = "Being awesome";
const std::string FORMAT    = "Kindle";
const std::string PUBLISHER = "Some Lucky Duck";
const int NUMBER_AVAILABLE  = 0;

TEST_CASE ("Book creation and checkout/in")
{
	Book b(TITLE, AUTHOR, SUBJECT, FORMAT, PUBLISHER, NUMBER_AVAILABLE);
	REQUIRE(TITLE == b.GetTitle());
	REQUIRE(!b.Checkout()); // since initially there are 0 copies
	REQUIRE(b.Checkin()); // put one copy back
	REQUIRE(b.Checkout()); // now can check out
	Book a(TITLE, "Foo", "Foo", "Foo", "Foo", 1000);
	REQUIRE(a == b); // even though all details differ, our == check is based only on the title

	Book c("Aardvarks are Early in the Alphabet", AUTHOR, SUBJECT, FORMAT, PUBLISHER, NUMBER_AVAILABLE);
	REQUIRE(c < a); // we need at least one comparison in order to support sorting Boo
}
