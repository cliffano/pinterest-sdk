-module(openapi_lead_form_common).

-include("openapi.hrl").

-export([openapi_lead_form_common/0]).

-export([openapi_lead_form_common/1]).

-export_type([openapi_lead_form_common/0]).

-type openapi_lead_form_common() ::
  [ {'name', binary() }
  | {'privacy_policy_link', binary() }
  | {'has_accepted_terms', boolean() }
  | {'completion_message', binary() }
  | {'status', openapi_lead_form_status:openapi_lead_form_status() }
  | {'disclosure_language', binary() }
  | {'questions', list(openapi_lead_form_question:openapi_lead_form_question()) }
  ].


openapi_lead_form_common() ->
    openapi_lead_form_common([]).

openapi_lead_form_common(Fields) ->
  Default = [ {'name', binary() }
            , {'privacy_policy_link', binary() }
            , {'has_accepted_terms', boolean() }
            , {'completion_message', binary() }
            , {'status', openapi_lead_form_status:openapi_lead_form_status() }
            , {'disclosure_language', binary() }
            , {'questions', list(openapi_lead_form_question:openapi_lead_form_question(), 0, 10) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

