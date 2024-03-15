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
 * QuizPinQuestion.h
 *
 * A specific quiz inquiry.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_QuizPinQuestion_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_QuizPinQuestion_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/QuizPinOption.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class QuizPinOption;

/// <summary>
/// A specific quiz inquiry.
/// </summary>
class  QuizPinQuestion
    : public ModelBase
{
public:
    QuizPinQuestion();
    virtual ~QuizPinQuestion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// QuizPinQuestion members

    /// <summary>
    /// 
    /// </summary>
    double getQuestionId() const;
    bool questionIdIsSet() const;
    void unsetQuestion_id();

    void setQuestionId(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQuestionText() const;
    bool questionTextIsSet() const;
    void unsetQuestion_text();

    void setQuestionText(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<QuizPinOption>>& getOptions();
    bool optionsIsSet() const;
    void unsetOptions();

    void setOptions(const std::vector<std::shared_ptr<QuizPinOption>>& value);


protected:
    double m_Question_id;
    bool m_Question_idIsSet;
    utility::string_t m_Question_text;
    bool m_Question_textIsSet;
    std::vector<std::shared_ptr<QuizPinOption>> m_Options;
    bool m_OptionsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_QuizPinQuestion_H_ */