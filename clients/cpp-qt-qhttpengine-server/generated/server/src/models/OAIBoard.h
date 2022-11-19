/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBoard.h
 *
 * Board
 */

#ifndef OAIBoard_H
#define OAIBoard_H

#include <QJsonObject>

#include "OAIBoard_owner.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBoard : public OAIObject {
public:
    OAIBoard();
    OAIBoard(QString json);
    ~OAIBoard() override;

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

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIBoard_owner getOwner() const;
    void setOwner(const OAIBoard_owner &owner);
    bool is_owner_Set() const;
    bool is_owner_Valid() const;

    QString getPrivacy() const;
    void setPrivacy(const QString &privacy);
    bool is_privacy_Set() const;
    bool is_privacy_Valid() const;

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

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIBoard_owner owner;
    bool m_owner_isSet;
    bool m_owner_isValid;

    QString privacy;
    bool m_privacy_isSet;
    bool m_privacy_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBoard)

#endif // OAIBoard_H
