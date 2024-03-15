#ifndef ad_array_response_TEST
#define ad_array_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ad_array_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ad_array_response.h"
ad_array_response_t* instantiate_ad_array_response(int include_optional);



ad_array_response_t* instantiate_ad_array_response(int include_optional) {
  ad_array_response_t* ad_array_response = NULL;
  if (include_optional) {
    ad_array_response = ad_array_response_create(
      list_createList()
    );
  } else {
    ad_array_response = ad_array_response_create(
      list_createList()
    );
  }

  return ad_array_response;
}


#ifdef ad_array_response_MAIN

void test_ad_array_response(int include_optional) {
    ad_array_response_t* ad_array_response_1 = instantiate_ad_array_response(include_optional);

	cJSON* jsonad_array_response_1 = ad_array_response_convertToJSON(ad_array_response_1);
	printf("ad_array_response :\n%s\n", cJSON_Print(jsonad_array_response_1));
	ad_array_response_t* ad_array_response_2 = ad_array_response_parseFromJSON(jsonad_array_response_1);
	cJSON* jsonad_array_response_2 = ad_array_response_convertToJSON(ad_array_response_2);
	printf("repeating ad_array_response:\n%s\n", cJSON_Print(jsonad_array_response_2));
}

int main() {
  test_ad_array_response(1);
  test_ad_array_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ad_array_response_MAIN
#endif // ad_array_response_TEST
