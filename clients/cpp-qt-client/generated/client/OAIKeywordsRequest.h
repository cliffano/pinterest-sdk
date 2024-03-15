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
 * OAIKeywordsRequest.h
 *
 * 
 */

#ifndef OAIKeywordsRequest_H
#define OAIKeywordsRequest_H

#include <QJsonObject>

#include "OAIKeywordsCommon.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIKeywordsCommon;

class OAIKeywordsRequest : public OAIObject {
public:
    OAIKeywordsRequest();
    OAIKeywordsRequest(QString json);
    ~OAIKeywordsRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIKeywordsCommon> getKeywords() const;
    void setKeywords(const QList<OAIKeywordsCommon> &keywords);
    bool is_keywords_Set() const;
    bool is_keywords_Valid() const;

    QString getParentId() const;
    void setParentId(const QString &parent_id);
    bool is_parent_id_Set() const;
    bool is_parent_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIKeywordsCommon> m_keywords;
    bool m_keywords_isSet;
    bool m_keywords_isValid;

    QString m_parent_id;
    bool m_parent_id_isSet;
    bool m_parent_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIKeywordsRequest)

#endif // OAIKeywordsRequest_H
