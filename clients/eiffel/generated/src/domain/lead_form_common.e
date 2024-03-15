note
 description:"[
		Pinterest REST API
 		Pinterest's REST API
  		The version of the OpenAPI document: 5.12.0
 	    Contact: blah+oapicf@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class LEAD_FORM_COMMON




feature --Access

    name: detachable STRING_32
      -- Internal name of the lead form.
    privacy_policy_link: detachable STRING_32
      -- A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
    has_accepted_terms: BOOLEAN
      -- Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
    completion_message: detachable STRING_32
      -- A message for people who complete the form to let them know what happens next.
    status: detachable LEAD_FORM_STATUS
      
    disclosure_language: detachable STRING_32
      -- Additional disclosure language to be included in the lead form.
    questions: detachable LIST [LEAD_FORM_QUESTION]
      -- List of questions to be displayed on the lead form.

feature -- Change Element

    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name
      end

    set_privacy_policy_link (a_name: like privacy_policy_link)
        -- Set 'privacy_policy_link' with 'a_name'.
      do
        privacy_policy_link := a_name
      ensure
        privacy_policy_link_set: privacy_policy_link = a_name
      end

    set_has_accepted_terms (a_name: like has_accepted_terms)
        -- Set 'has_accepted_terms' with 'a_name'.
      do
        has_accepted_terms := a_name
      ensure
        has_accepted_terms_set: has_accepted_terms = a_name
      end

    set_completion_message (a_name: like completion_message)
        -- Set 'completion_message' with 'a_name'.
      do
        completion_message := a_name
      ensure
        completion_message_set: completion_message = a_name
      end

    set_status (a_name: like status)
        -- Set 'status' with 'a_name'.
      do
        status := a_name
      ensure
        status_set: status = a_name
      end

    set_disclosure_language (a_name: like disclosure_language)
        -- Set 'disclosure_language' with 'a_name'.
      do
        disclosure_language := a_name
      ensure
        disclosure_language_set: disclosure_language = a_name
      end

    set_questions (a_name: like questions)
        -- Set 'questions' with 'a_name'.
      do
        questions := a_name
      ensure
        questions_set: questions = a_name
      end


 feature -- Status Report

    output: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass LEAD_FORM_COMMON%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")
        end
        if attached privacy_policy_link as l_privacy_policy_link then
          Result.append ("%Nprivacy_policy_link:")
          Result.append (l_privacy_policy_link.out)
          Result.append ("%N")
        end
        if attached has_accepted_terms as l_has_accepted_terms then
          Result.append ("%Nhas_accepted_terms:")
          Result.append (l_has_accepted_terms.out)
          Result.append ("%N")
        end
        if attached completion_message as l_completion_message then
          Result.append ("%Ncompletion_message:")
          Result.append (l_completion_message.out)
          Result.append ("%N")
        end
        if attached status as l_status then
          Result.append ("%Nstatus:")
          Result.append (l_status.out)
          Result.append ("%N")
        end
        if attached disclosure_language as l_disclosure_language then
          Result.append ("%Ndisclosure_language:")
          Result.append (l_disclosure_language.out)
          Result.append ("%N")
        end
        if attached questions as l_questions then
          across l_questions as ic loop
            Result.append ("%N questions:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end
      end
end

