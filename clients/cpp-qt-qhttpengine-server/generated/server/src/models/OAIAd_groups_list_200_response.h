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
 * OAIAd_groups_list_200_response.h
 *
 * 
 */

#ifndef OAIAd_groups_list_200_response_H
#define OAIAd_groups_list_200_response_H

#include <QJsonObject>

#include "OAIAdGroupResponse.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAd_groups_list_200_response : public OAIObject {
public:
    OAIAd_groups_list_200_response();
    OAIAd_groups_list_200_response(QString json);
    ~OAIAd_groups_list_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIAdGroupResponse> getItems() const;
    void setItems(const QList<OAIAdGroupResponse> &items);
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

    QList<OAIAdGroupResponse> items;
    bool m_items_isSet;
    bool m_items_isValid;

    QString bookmark;
    bool m_bookmark_isSet;
    bool m_bookmark_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAd_groups_list_200_response)

#endif // OAIAd_groups_list_200_response_H
