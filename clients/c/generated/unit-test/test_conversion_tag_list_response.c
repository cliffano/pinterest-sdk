#ifndef conversion_tag_list_response_TEST
#define conversion_tag_list_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define conversion_tag_list_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/conversion_tag_list_response.h"
conversion_tag_list_response_t* instantiate_conversion_tag_list_response(int include_optional);



conversion_tag_list_response_t* instantiate_conversion_tag_list_response(int include_optional) {
  conversion_tag_list_response_t* conversion_tag_list_response = NULL;
  if (include_optional) {
    conversion_tag_list_response = conversion_tag_list_response_create(
      list_createList()
    );
  } else {
    conversion_tag_list_response = conversion_tag_list_response_create(
      list_createList()
    );
  }

  return conversion_tag_list_response;
}


#ifdef conversion_tag_list_response_MAIN

void test_conversion_tag_list_response(int include_optional) {
    conversion_tag_list_response_t* conversion_tag_list_response_1 = instantiate_conversion_tag_list_response(include_optional);

	cJSON* jsonconversion_tag_list_response_1 = conversion_tag_list_response_convertToJSON(conversion_tag_list_response_1);
	printf("conversion_tag_list_response :\n%s\n", cJSON_Print(jsonconversion_tag_list_response_1));
	conversion_tag_list_response_t* conversion_tag_list_response_2 = conversion_tag_list_response_parseFromJSON(jsonconversion_tag_list_response_1);
	cJSON* jsonconversion_tag_list_response_2 = conversion_tag_list_response_convertToJSON(conversion_tag_list_response_2);
	printf("repeating conversion_tag_list_response:\n%s\n", cJSON_Print(jsonconversion_tag_list_response_2));
}

int main() {
  test_conversion_tag_list_response(1);
  test_conversion_tag_list_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // conversion_tag_list_response_MAIN
#endif // conversion_tag_list_response_TEST
