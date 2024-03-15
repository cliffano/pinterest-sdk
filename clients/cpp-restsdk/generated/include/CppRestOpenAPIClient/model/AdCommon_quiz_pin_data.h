/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdCommon_quiz_pin_data.h
 *
 * Before creating a quiz ad, you must create an organic Pin using POST/Create Pin for each result in the quiz. Quiz ads cannot be saved by a Pinner. Quiz ad results can be saved.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_AdCommon_quiz_pin_data_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_AdCommon_quiz_pin_data_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/QuizPinQuestion.h"
#include <vector>
#include "CppRestOpenAPIClient/model/QuizPinResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class QuizPinQuestion;
class QuizPinResult;

/// <summary>
/// Before creating a quiz ad, you must create an organic Pin using POST/Create Pin for each result in the quiz. Quiz ads cannot be saved by a Pinner. Quiz ad results can be saved.
/// </summary>
class  AdCommon_quiz_pin_data
    : public ModelBase
{
public:
    AdCommon_quiz_pin_data();
    virtual ~AdCommon_quiz_pin_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AdCommon_quiz_pin_data members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<QuizPinQuestion>>& getQuestions();
    bool questionsIsSet() const;
    void unsetQuestions();

    void setQuestions(const std::vector<std::shared_ptr<QuizPinQuestion>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<QuizPinResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();

    void setResults(const std::vector<std::shared_ptr<QuizPinResult>>& value);


protected:
    std::vector<std::shared_ptr<QuizPinQuestion>> m_Questions;
    bool m_QuestionsIsSet;
    std::vector<std::shared_ptr<QuizPinResult>> m_Results;
    bool m_ResultsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_AdCommon_quiz_pin_data_H_ */