#ifndef catalogs_vertical_feeds_create_request_TEST
#define catalogs_vertical_feeds_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define catalogs_vertical_feeds_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/catalogs_vertical_feeds_create_request.h"
catalogs_vertical_feeds_create_request_t* instantiate_catalogs_vertical_feeds_create_request(int include_optional);

#include "test_catalogs_feeds_create_request_default_locale.c"
#include "test_catalogs_feed_credentials.c"
#include "test_catalogs_feed_processing_schedule.c"


catalogs_vertical_feeds_create_request_t* instantiate_catalogs_vertical_feeds_create_request(int include_optional) {
  catalogs_vertical_feeds_create_request_t* catalogs_vertical_feeds_create_request = NULL;
  if (include_optional) {
    catalogs_vertical_feeds_create_request = catalogs_vertical_feeds_create_request_create(
      pinterest_rest_api_catalogs_vertical_feeds_create_request__"USD",
      "0",
      pinterest_rest_api_catalogs_vertical_feeds_create_request__TSV,
      en-US,
       // false, not to have infinite recursion
      instantiate_catalogs_feed_credentials(0),
      "a",
       // false, not to have infinite recursion
      instantiate_catalogs_feed_processing_schedule(0),
      pinterest_rest_api_catalogs_vertical_feeds_create_request__RETAIL,
      pinterest_rest_api_catalogs_vertical_feeds_create_request__"US",
      pinterest_rest_api_catalogs_vertical_feeds_create_request__IN_STOCK,
      "a"
    );
  } else {
    catalogs_vertical_feeds_create_request = catalogs_vertical_feeds_create_request_create(
      pinterest_rest_api_catalogs_vertical_feeds_create_request__"USD",
      "0",
      pinterest_rest_api_catalogs_vertical_feeds_create_request__TSV,
      en-US,
      NULL,
      "a",
      NULL,
      pinterest_rest_api_catalogs_vertical_feeds_create_request__RETAIL,
      pinterest_rest_api_catalogs_vertical_feeds_create_request__"US",
      pinterest_rest_api_catalogs_vertical_feeds_create_request__IN_STOCK,
      "a"
    );
  }

  return catalogs_vertical_feeds_create_request;
}


#ifdef catalogs_vertical_feeds_create_request_MAIN

void test_catalogs_vertical_feeds_create_request(int include_optional) {
    catalogs_vertical_feeds_create_request_t* catalogs_vertical_feeds_create_request_1 = instantiate_catalogs_vertical_feeds_create_request(include_optional);

	cJSON* jsoncatalogs_vertical_feeds_create_request_1 = catalogs_vertical_feeds_create_request_convertToJSON(catalogs_vertical_feeds_create_request_1);
	printf("catalogs_vertical_feeds_create_request :\n%s\n", cJSON_Print(jsoncatalogs_vertical_feeds_create_request_1));
	catalogs_vertical_feeds_create_request_t* catalogs_vertical_feeds_create_request_2 = catalogs_vertical_feeds_create_request_parseFromJSON(jsoncatalogs_vertical_feeds_create_request_1);
	cJSON* jsoncatalogs_vertical_feeds_create_request_2 = catalogs_vertical_feeds_create_request_convertToJSON(catalogs_vertical_feeds_create_request_2);
	printf("repeating catalogs_vertical_feeds_create_request:\n%s\n", cJSON_Print(jsoncatalogs_vertical_feeds_create_request_2));
}

int main() {
  test_catalogs_vertical_feeds_create_request(1);
  test_catalogs_vertical_feeds_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // catalogs_vertical_feeds_create_request_MAIN
#endif // catalogs_vertical_feeds_create_request_TEST
