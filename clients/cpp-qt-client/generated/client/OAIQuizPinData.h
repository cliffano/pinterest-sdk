/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIQuizPinData.h
 *
 * This field includes all quiz data including questions, options, and results.
 */

#ifndef OAIQuizPinData_H
#define OAIQuizPinData_H

#include <QJsonObject>

#include "OAIQuizPinQuestion.h"
#include "OAIQuizPinResult.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIQuizPinQuestion;
class OAIQuizPinResult;

class OAIQuizPinData : public OAIObject {
public:
    OAIQuizPinData();
    OAIQuizPinData(QString json);
    ~OAIQuizPinData() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIQuizPinQuestion> getQuestions() const;
    void setQuestions(const QList<OAIQuizPinQuestion> &questions);
    bool is_questions_Set() const;
    bool is_questions_Valid() const;

    QList<OAIQuizPinResult> getResults() const;
    void setResults(const QList<OAIQuizPinResult> &results);
    bool is_results_Set() const;
    bool is_results_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIQuizPinQuestion> m_questions;
    bool m_questions_isSet;
    bool m_questions_isValid;

    QList<OAIQuizPinResult> m_results;
    bool m_results_isSet;
    bool m_results_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIQuizPinData)

#endif // OAIQuizPinData_H
