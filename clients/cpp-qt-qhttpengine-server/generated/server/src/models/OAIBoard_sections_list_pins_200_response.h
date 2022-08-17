/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBoard_sections_list_pins_200_response.h
 *
 * 
 */

#ifndef OAIBoard_sections_list_pins_200_response_H
#define OAIBoard_sections_list_pins_200_response_H

#include <QJsonObject>

#include "OAIBoard_sections_list_pins_200_response_allOf.h"
#include "OAIPaginated.h"
#include "OAIPin.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBoard_sections_list_pins_200_response : public OAIObject {
public:
    OAIBoard_sections_list_pins_200_response();
    OAIBoard_sections_list_pins_200_response(QString json);
    ~OAIBoard_sections_list_pins_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIPin> getItems() const;
    void setItems(const QList<OAIPin> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    QString getBookmark() const;
    void setBookmark(const QString &bookmark);
    bool is_bookmark_Set() const;
    bool is_bookmark_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIPin> items;
    bool m_items_isSet;
    bool m_items_isValid;

    QString bookmark;
    bool m_bookmark_isSet;
    bool m_bookmark_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBoard_sections_list_pins_200_response)

#endif // OAIBoard_sections_list_pins_200_response_H