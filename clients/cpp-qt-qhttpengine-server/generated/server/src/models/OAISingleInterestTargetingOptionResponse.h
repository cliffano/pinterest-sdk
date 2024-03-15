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
 * OAISingleInterestTargetingOptionResponse.h
 *
 * 
 */

#ifndef OAISingleInterestTargetingOptionResponse_H
#define OAISingleInterestTargetingOptionResponse_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAISingleInterestTargetingOptionResponse : public OAIObject {
public:
    OAISingleInterestTargetingOptionResponse();
    OAISingleInterestTargetingOptionResponse(QString json);
    ~OAISingleInterestTargetingOptionResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QList<QString> getChildInterests() const;
    void setChildInterests(const QList<QString> &child_interests);
    bool is_child_interests_Set() const;
    bool is_child_interests_Valid() const;

    qint32 getLevel() const;
    void setLevel(const qint32 &level);
    bool is_level_Set() const;
    bool is_level_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QList<QString> child_interests;
    bool m_child_interests_isSet;
    bool m_child_interests_isValid;

    qint32 level;
    bool m_level_isSet;
    bool m_level_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISingleInterestTargetingOptionResponse)

#endif // OAISingleInterestTargetingOptionResponse_H
