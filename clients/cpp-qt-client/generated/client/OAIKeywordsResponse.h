/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIKeywordsResponse.h
 *
 * 
 */

#ifndef OAIKeywordsResponse_H
#define OAIKeywordsResponse_H

#include <QJsonObject>

#include "OAIKeyword.h"
#include "OAIKeywordError.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIKeywordError;
class OAIKeyword;

class OAIKeywordsResponse : public OAIObject {
public:
    OAIKeywordsResponse();
    OAIKeywordsResponse(QString json);
    ~OAIKeywordsResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIKeywordError> getErrors() const;
    void setErrors(const QList<OAIKeywordError> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QList<OAIKeyword> getKeywords() const;
    void setKeywords(const QList<OAIKeyword> &keywords);
    bool is_keywords_Set() const;
    bool is_keywords_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIKeywordError> m_errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QList<OAIKeyword> m_keywords;
    bool m_keywords_isSet;
    bool m_keywords_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIKeywordsResponse)

#endif // OAIKeywordsResponse_H
