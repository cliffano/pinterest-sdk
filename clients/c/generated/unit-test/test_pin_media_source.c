#ifndef pin_media_source_TEST
#define pin_media_source_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pin_media_source_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pin_media_source.h"
pin_media_source_t* instantiate_pin_media_source(int include_optional);



pin_media_source_t* instantiate_pin_media_source(int include_optional) {
  pin_media_source_t* pin_media_source = NULL;
  if (include_optional) {
    pin_media_source = pin_media_source_create(
      pinterest_rest_api_pin_media_source_SOURCETYPE_pin_url,
      pinterest_rest_api_pin_media_source_CONTENTTYPE_image/jpeg,
      "a",
      1,
      "0",
      "0",
      pinterest_rest_api_pin_media_source_COVERIMAGECONTENTTYPE_image/jpeg,
      "0",
      "a",
      list_createList(),
      0,
      1
    );
  } else {
    pin_media_source = pin_media_source_create(
      pinterest_rest_api_pin_media_source_SOURCETYPE_pin_url,
      pinterest_rest_api_pin_media_source_CONTENTTYPE_image/jpeg,
      "a",
      1,
      "0",
      "0",
      pinterest_rest_api_pin_media_source_COVERIMAGECONTENTTYPE_image/jpeg,
      "0",
      "a",
      list_createList(),
      0,
      1
    );
  }

  return pin_media_source;
}


#ifdef pin_media_source_MAIN

void test_pin_media_source(int include_optional) {
    pin_media_source_t* pin_media_source_1 = instantiate_pin_media_source(include_optional);

	cJSON* jsonpin_media_source_1 = pin_media_source_convertToJSON(pin_media_source_1);
	printf("pin_media_source :\n%s\n", cJSON_Print(jsonpin_media_source_1));
	pin_media_source_t* pin_media_source_2 = pin_media_source_parseFromJSON(jsonpin_media_source_1);
	cJSON* jsonpin_media_source_2 = pin_media_source_convertToJSON(pin_media_source_2);
	printf("repeating pin_media_source:\n%s\n", cJSON_Print(jsonpin_media_source_2));
}

int main() {
  test_pin_media_source(1);
  test_pin_media_source(0);

  printf("Hello world \n");
  return 0;
}

#endif // pin_media_source_MAIN
#endif // pin_media_source_TEST
