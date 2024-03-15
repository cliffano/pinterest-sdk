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
 * OAIPin.h
 *
 * Pin
 */

#ifndef OAIPin_H
#define OAIPin_H

#include <QJsonObject>

#include "OAIBoard_owner.h"
#include "OAICreativeType.h"
#include "OAIObject.h"
#include "OAIPinMediaSource.h"
#include "OAISummaryPin_media.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPin : public OAIObject {
public:
    OAIPin();
    OAIPin(QString json);
    ~OAIPin() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QString getLink() const;
    void setLink(const QString &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getDominantColor() const;
    void setDominantColor(const QString &dominant_color);
    bool is_dominant_color_Set() const;
    bool is_dominant_color_Valid() const;

    QString getAltText() const;
    void setAltText(const QString &alt_text);
    bool is_alt_text_Set() const;
    bool is_alt_text_Valid() const;

    OAICreativeType getCreativeType() const;
    void setCreativeType(const OAICreativeType &creative_type);
    bool is_creative_type_Set() const;
    bool is_creative_type_Valid() const;

    QString getBoardId() const;
    void setBoardId(const QString &board_id);
    bool is_board_id_Set() const;
    bool is_board_id_Valid() const;

    QString getBoardSectionId() const;
    void setBoardSectionId(const QString &board_section_id);
    bool is_board_section_id_Set() const;
    bool is_board_section_id_Valid() const;

    OAIBoard_owner getBoardOwner() const;
    void setBoardOwner(const OAIBoard_owner &board_owner);
    bool is_board_owner_Set() const;
    bool is_board_owner_Valid() const;

    bool isIsOwner() const;
    void setIsOwner(const bool &is_owner);
    bool is_is_owner_Set() const;
    bool is_is_owner_Valid() const;

    OAISummaryPin_media getMedia() const;
    void setMedia(const OAISummaryPin_media &media);
    bool is_media_Set() const;
    bool is_media_Valid() const;

    OAIPinMediaSource getMediaSource() const;
    void setMediaSource(const OAIPinMediaSource &media_source);
    bool is_media_source_Set() const;
    bool is_media_source_Valid() const;

    QString getParentPinId() const;
    void setParentPinId(const QString &parent_pin_id);
    bool is_parent_pin_id_Set() const;
    bool is_parent_pin_id_Valid() const;

    bool isIsStandard() const;
    void setIsStandard(const bool &is_standard);
    bool is_is_standard_Set() const;
    bool is_is_standard_Valid() const;

    bool isHasBeenPromoted() const;
    void setHasBeenPromoted(const bool &has_been_promoted);
    bool is_has_been_promoted_Set() const;
    bool is_has_been_promoted_Valid() const;

    QString getNote() const;
    void setNote(const QString &note);
    bool is_note_Set() const;
    bool is_note_Valid() const;

    OAIObject getPinMetrics() const;
    void setPinMetrics(const OAIObject &pin_metrics);
    bool is_pin_metrics_Set() const;
    bool is_pin_metrics_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QString link;
    bool m_link_isSet;
    bool m_link_isValid;

    QString title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString dominant_color;
    bool m_dominant_color_isSet;
    bool m_dominant_color_isValid;

    QString alt_text;
    bool m_alt_text_isSet;
    bool m_alt_text_isValid;

    OAICreativeType creative_type;
    bool m_creative_type_isSet;
    bool m_creative_type_isValid;

    QString board_id;
    bool m_board_id_isSet;
    bool m_board_id_isValid;

    QString board_section_id;
    bool m_board_section_id_isSet;
    bool m_board_section_id_isValid;

    OAIBoard_owner board_owner;
    bool m_board_owner_isSet;
    bool m_board_owner_isValid;

    bool is_owner;
    bool m_is_owner_isSet;
    bool m_is_owner_isValid;

    OAISummaryPin_media media;
    bool m_media_isSet;
    bool m_media_isValid;

    OAIPinMediaSource media_source;
    bool m_media_source_isSet;
    bool m_media_source_isValid;

    QString parent_pin_id;
    bool m_parent_pin_id_isSet;
    bool m_parent_pin_id_isValid;

    bool is_standard;
    bool m_is_standard_isSet;
    bool m_is_standard_isValid;

    bool has_been_promoted;
    bool m_has_been_promoted_isSet;
    bool m_has_been_promoted_isValid;

    QString note;
    bool m_note_isSet;
    bool m_note_isValid;

    OAIObject pin_metrics;
    bool m_pin_metrics_isSet;
    bool m_pin_metrics_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPin)

#endif // OAIPin_H
