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
 * OAILeadFormQuestion.h
 *
 * 
 */

#ifndef OAILeadFormQuestion_H
#define OAILeadFormQuestion_H

#include <QJsonObject>

#include "OAILeadFormQuestionFieldType.h"
#include "OAILeadFormQuestionType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAILeadFormQuestion : public OAIObject {
public:
    OAILeadFormQuestion();
    OAILeadFormQuestion(QString json);
    ~OAILeadFormQuestion() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAILeadFormQuestionType getQuestionType() const;
    void setQuestionType(const OAILeadFormQuestionType &question_type);
    bool is_question_type_Set() const;
    bool is_question_type_Valid() const;

    OAILeadFormQuestionFieldType getCustomQuestionFieldType() const;
    void setCustomQuestionFieldType(const OAILeadFormQuestionFieldType &custom_question_field_type);
    bool is_custom_question_field_type_Set() const;
    bool is_custom_question_field_type_Valid() const;

    QString getCustomQuestionLabel() const;
    void setCustomQuestionLabel(const QString &custom_question_label);
    bool is_custom_question_label_Set() const;
    bool is_custom_question_label_Valid() const;

    QList<QString> getCustomQuestionOptions() const;
    void setCustomQuestionOptions(const QList<QString> &custom_question_options);
    bool is_custom_question_options_Set() const;
    bool is_custom_question_options_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAILeadFormQuestionType m_question_type;
    bool m_question_type_isSet;
    bool m_question_type_isValid;

    OAILeadFormQuestionFieldType m_custom_question_field_type;
    bool m_custom_question_field_type_isSet;
    bool m_custom_question_field_type_isValid;

    QString m_custom_question_label;
    bool m_custom_question_label_isSet;
    bool m_custom_question_label_isValid;

    QList<QString> m_custom_question_options;
    bool m_custom_question_options_isSet;
    bool m_custom_question_options_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAILeadFormQuestion)

#endif // OAILeadFormQuestion_H
