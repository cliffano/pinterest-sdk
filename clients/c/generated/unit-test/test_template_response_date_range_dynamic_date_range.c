#ifndef template_response_date_range_dynamic_date_range_TEST
#define template_response_date_range_dynamic_date_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define template_response_date_range_dynamic_date_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/template_response_date_range_dynamic_date_range.h"
template_response_date_range_dynamic_date_range_t* instantiate_template_response_date_range_dynamic_date_range(int include_optional);



template_response_date_range_dynamic_date_range_t* instantiate_template_response_date_range_dynamic_date_range(int include_optional) {
  template_response_date_range_dynamic_date_range_t* template_response_date_range_dynamic_date_range = NULL;
  if (include_optional) {
    template_response_date_range_dynamic_date_range = template_response_date_range_dynamic_date_range_create(
      "dynamic",
      pinterest_rest_api_template_response_date_range_dynamic_date_range_RANGE_"YEAR_TO_DATE"
    );
  } else {
    template_response_date_range_dynamic_date_range = template_response_date_range_dynamic_date_range_create(
      "dynamic",
      pinterest_rest_api_template_response_date_range_dynamic_date_range_RANGE_"YEAR_TO_DATE"
    );
  }

  return template_response_date_range_dynamic_date_range;
}


#ifdef template_response_date_range_dynamic_date_range_MAIN

void test_template_response_date_range_dynamic_date_range(int include_optional) {
    template_response_date_range_dynamic_date_range_t* template_response_date_range_dynamic_date_range_1 = instantiate_template_response_date_range_dynamic_date_range(include_optional);

	cJSON* jsontemplate_response_date_range_dynamic_date_range_1 = template_response_date_range_dynamic_date_range_convertToJSON(template_response_date_range_dynamic_date_range_1);
	printf("template_response_date_range_dynamic_date_range :\n%s\n", cJSON_Print(jsontemplate_response_date_range_dynamic_date_range_1));
	template_response_date_range_dynamic_date_range_t* template_response_date_range_dynamic_date_range_2 = template_response_date_range_dynamic_date_range_parseFromJSON(jsontemplate_response_date_range_dynamic_date_range_1);
	cJSON* jsontemplate_response_date_range_dynamic_date_range_2 = template_response_date_range_dynamic_date_range_convertToJSON(template_response_date_range_dynamic_date_range_2);
	printf("repeating template_response_date_range_dynamic_date_range:\n%s\n", cJSON_Print(jsontemplate_response_date_range_dynamic_date_range_2));
}

int main() {
  test_template_response_date_range_dynamic_date_range(1);
  test_template_response_date_range_dynamic_date_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // template_response_date_range_dynamic_date_range_MAIN
#endif // template_response_date_range_dynamic_date_range_TEST
