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
 * OAIPins_save_request.h
 *
 * 
 */

#ifndef OAIPins_save_request_H
#define OAIPins_save_request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPins_save_request : public OAIObject {
public:
    OAIPins_save_request();
    OAIPins_save_request(QString json);
    ~OAIPins_save_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBoardId() const;
    void setBoardId(const QString &board_id);
    bool is_board_id_Set() const;
    bool is_board_id_Valid() const;

    QString getBoardSectionId() const;
    void setBoardSectionId(const QString &board_section_id);
    bool is_board_section_id_Set() const;
    bool is_board_section_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString board_id;
    bool m_board_id_isSet;
    bool m_board_id_isValid;

    QString board_section_id;
    bool m_board_section_id_isSet;
    bool m_board_section_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPins_save_request)

#endif // OAIPins_save_request_H
