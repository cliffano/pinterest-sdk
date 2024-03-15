#ifndef ad_group_audience_sizing_response_TEST
#define ad_group_audience_sizing_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ad_group_audience_sizing_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ad_group_audience_sizing_response.h"
ad_group_audience_sizing_response_t* instantiate_ad_group_audience_sizing_response(int include_optional);



ad_group_audience_sizing_response_t* instantiate_ad_group_audience_sizing_response(int include_optional) {
  ad_group_audience_sizing_response_t* ad_group_audience_sizing_response = NULL;
  if (include_optional) {
    ad_group_audience_sizing_response = ad_group_audience_sizing_response_create(
      100000,
      150000
    );
  } else {
    ad_group_audience_sizing_response = ad_group_audience_sizing_response_create(
      100000,
      150000
    );
  }

  return ad_group_audience_sizing_response;
}


#ifdef ad_group_audience_sizing_response_MAIN

void test_ad_group_audience_sizing_response(int include_optional) {
    ad_group_audience_sizing_response_t* ad_group_audience_sizing_response_1 = instantiate_ad_group_audience_sizing_response(include_optional);

	cJSON* jsonad_group_audience_sizing_response_1 = ad_group_audience_sizing_response_convertToJSON(ad_group_audience_sizing_response_1);
	printf("ad_group_audience_sizing_response :\n%s\n", cJSON_Print(jsonad_group_audience_sizing_response_1));
	ad_group_audience_sizing_response_t* ad_group_audience_sizing_response_2 = ad_group_audience_sizing_response_parseFromJSON(jsonad_group_audience_sizing_response_1);
	cJSON* jsonad_group_audience_sizing_response_2 = ad_group_audience_sizing_response_convertToJSON(ad_group_audience_sizing_response_2);
	printf("repeating ad_group_audience_sizing_response:\n%s\n", cJSON_Print(jsonad_group_audience_sizing_response_2));
}

int main() {
  test_ad_group_audience_sizing_response(1);
  test_ad_group_audience_sizing_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ad_group_audience_sizing_response_MAIN
#endif // ad_group_audience_sizing_response_TEST
