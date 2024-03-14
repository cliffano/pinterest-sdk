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
 * OAIKeywordUpdateBody.h
 *
 * 
 */

#ifndef OAIKeywordUpdateBody_H
#define OAIKeywordUpdateBody_H

#include <QJsonObject>

#include "OAIKeywordUpdate.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIKeywordUpdate;

class OAIKeywordUpdateBody : public OAIObject {
public:
    OAIKeywordUpdateBody();
    OAIKeywordUpdateBody(QString json);
    ~OAIKeywordUpdateBody() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIKeywordUpdate> getKeywords() const;
    void setKeywords(const QList<OAIKeywordUpdate> &keywords);
    bool is_keywords_Set() const;
    bool is_keywords_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIKeywordUpdate> m_keywords;
    bool m_keywords_isSet;
    bool m_keywords_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIKeywordUpdateBody)

#endif // OAIKeywordUpdateBody_H
