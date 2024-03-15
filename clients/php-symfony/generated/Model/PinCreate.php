<?php
/**
 * PinCreate
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the PinCreate model.
 *
 * Pin
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class PinCreate 
{
        /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $id = null;

    /**
     * @var \DateTime|null
     * @SerializedName("created_at")
     * @Assert\Type("\DateTime"))
     * @Type("DateTime")
     */
    protected ?\DateTime $createdAt = null;

    /**
     * @var string|null
     * @SerializedName("link")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 2048
     * )
     */
    protected ?string $link = null;

    /**
     * @var string|null
     * @SerializedName("title")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 100
     * )
     */
    protected ?string $title = null;

    /**
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 800
     * )
     */
    protected ?string $description = null;

    /**
     * Dominant pin color. Hex number, e.g. \\\&quot;#6E7874\\\&quot;.
     *
     * @var string|null
     * @SerializedName("dominant_color")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $dominantColor = null;

    /**
     * @var string|null
     * @SerializedName("alt_text")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 500
     * )
     */
    protected ?string $altText = null;

    /**
     * The board to which this Pin belongs.
     *
     * @var string|null
     * @SerializedName("board_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $boardId = null;

    /**
     * The board section to which this Pin belongs.
     *
     * @var string|null
     * @SerializedName("board_section_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $boardSectionId = null;

    /**
     * @var BoardOwner|null
     * @SerializedName("board_owner")
     * @Assert\Type("OpenAPI\Server\Model\BoardOwner")
     * @Type("OpenAPI\Server\Model\BoardOwner")
     */
    protected ?BoardOwner $boardOwner = null;

    /**
     * @var SummaryPinMedia|null
     * @SerializedName("media")
     * @Assert\Type("OpenAPI\Server\Model\SummaryPinMedia")
     * @Type("OpenAPI\Server\Model\SummaryPinMedia")
     */
    protected ?SummaryPinMedia $media = null;

    /**
     * @var PinMediaSource|null
     * @SerializedName("media_source")
     * @Assert\Type("OpenAPI\Server\Model\PinMediaSource")
     * @Type("OpenAPI\Server\Model\PinMediaSource")
     */
    protected ?PinMediaSource $mediaSource = null;

    /**
     * The source pin id if this pin was saved from another pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/article/save-pins-on-pinterest\&quot;&gt;Learn more&lt;/a&gt;.
     *
     * @var string|null
     * @SerializedName("parent_pin_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $parentPinId = null;

    /**
     * Private note for this Pin. &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/article/add-notes-to-your-pins\&quot;&gt;Learn more&lt;/a&gt;.
     *
     * @var string|null
     * @SerializedName("note")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $note = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->id = array_key_exists('id', $data) ? $data['id'] : $this->id;
            $this->createdAt = array_key_exists('createdAt', $data) ? $data['createdAt'] : $this->createdAt;
            $this->link = array_key_exists('link', $data) ? $data['link'] : $this->link;
            $this->title = array_key_exists('title', $data) ? $data['title'] : $this->title;
            $this->description = array_key_exists('description', $data) ? $data['description'] : $this->description;
            $this->dominantColor = array_key_exists('dominantColor', $data) ? $data['dominantColor'] : $this->dominantColor;
            $this->altText = array_key_exists('altText', $data) ? $data['altText'] : $this->altText;
            $this->boardId = array_key_exists('boardId', $data) ? $data['boardId'] : $this->boardId;
            $this->boardSectionId = array_key_exists('boardSectionId', $data) ? $data['boardSectionId'] : $this->boardSectionId;
            $this->boardOwner = array_key_exists('boardOwner', $data) ? $data['boardOwner'] : $this->boardOwner;
            $this->media = array_key_exists('media', $data) ? $data['media'] : $this->media;
            $this->mediaSource = array_key_exists('mediaSource', $data) ? $data['mediaSource'] : $this->mediaSource;
            $this->parentPinId = array_key_exists('parentPinId', $data) ? $data['parentPinId'] : $this->parentPinId;
            $this->note = array_key_exists('note', $data) ? $data['note'] : $this->note;
        }
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId(): ?string
    {
        return $this->id;
    }



    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId(?string $id = null): self
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets createdAt.
     *
     * @return \DateTime|null
     */
    public function getCreatedAt(): ?\DateTime
    {
        return $this->createdAt;
    }



    /**
     * Sets createdAt.
     *
     * @param \DateTime|null $createdAt
     *
     * @return $this
     */
    public function setCreatedAt(?\DateTime $createdAt = null): self
    {
        $this->createdAt = $createdAt;

        return $this;
    }

    /**
     * Gets link.
     *
     * @return string|null
     */
    public function getLink(): ?string
    {
        return $this->link;
    }



    /**
     * Sets link.
     *
     * @param string|null $link
     *
     * @return $this
     */
    public function setLink(?string $link = null): self
    {
        $this->link = $link;

        return $this;
    }

    /**
     * Gets title.
     *
     * @return string|null
     */
    public function getTitle(): ?string
    {
        return $this->title;
    }



    /**
     * Sets title.
     *
     * @param string|null $title
     *
     * @return $this
     */
    public function setTitle(?string $title = null): self
    {
        $this->title = $title;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription(): ?string
    {
        return $this->description;
    }



    /**
     * Sets description.
     *
     * @param string|null $description
     *
     * @return $this
     */
    public function setDescription(?string $description = null): self
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets dominantColor.
     *
     * @return string|null
     */
    public function getDominantColor(): ?string
    {
        return $this->dominantColor;
    }



    /**
     * Sets dominantColor.
     *
     * @param string|null $dominantColor  Dominant pin color. Hex number, e.g. \\\"#6E7874\\\".
     *
     * @return $this
     */
    public function setDominantColor(?string $dominantColor = null): self
    {
        $this->dominantColor = $dominantColor;

        return $this;
    }

    /**
     * Gets altText.
     *
     * @return string|null
     */
    public function getAltText(): ?string
    {
        return $this->altText;
    }



    /**
     * Sets altText.
     *
     * @param string|null $altText
     *
     * @return $this
     */
    public function setAltText(?string $altText = null): self
    {
        $this->altText = $altText;

        return $this;
    }

    /**
     * Gets boardId.
     *
     * @return string|null
     */
    public function getBoardId(): ?string
    {
        return $this->boardId;
    }



    /**
     * Sets boardId.
     *
     * @param string|null $boardId  The board to which this Pin belongs.
     *
     * @return $this
     */
    public function setBoardId(?string $boardId = null): self
    {
        $this->boardId = $boardId;

        return $this;
    }

    /**
     * Gets boardSectionId.
     *
     * @return string|null
     */
    public function getBoardSectionId(): ?string
    {
        return $this->boardSectionId;
    }



    /**
     * Sets boardSectionId.
     *
     * @param string|null $boardSectionId  The board section to which this Pin belongs.
     *
     * @return $this
     */
    public function setBoardSectionId(?string $boardSectionId = null): self
    {
        $this->boardSectionId = $boardSectionId;

        return $this;
    }

    /**
     * Gets boardOwner.
     *
     * @return BoardOwner|null
     */
    public function getBoardOwner(): ?BoardOwner
    {
        return $this->boardOwner;
    }



    /**
     * Sets boardOwner.
     *
     * @param BoardOwner|null $boardOwner
     *
     * @return $this
     */
    public function setBoardOwner(?BoardOwner $boardOwner = null): self
    {
        $this->boardOwner = $boardOwner;

        return $this;
    }

    /**
     * Gets media.
     *
     * @return SummaryPinMedia|null
     */
    public function getMedia(): ?SummaryPinMedia
    {
        return $this->media;
    }



    /**
     * Sets media.
     *
     * @param SummaryPinMedia|null $media
     *
     * @return $this
     */
    public function setMedia(?SummaryPinMedia $media = null): self
    {
        $this->media = $media;

        return $this;
    }

    /**
     * Gets mediaSource.
     *
     * @return PinMediaSource|null
     */
    public function getMediaSource(): ?PinMediaSource
    {
        return $this->mediaSource;
    }



    /**
     * Sets mediaSource.
     *
     * @param PinMediaSource|null $mediaSource
     *
     * @return $this
     */
    public function setMediaSource(?PinMediaSource $mediaSource = null): self
    {
        $this->mediaSource = $mediaSource;

        return $this;
    }

    /**
     * Gets parentPinId.
     *
     * @return string|null
     */
    public function getParentPinId(): ?string
    {
        return $this->parentPinId;
    }



    /**
     * Sets parentPinId.
     *
     * @param string|null $parentPinId  The source pin id if this pin was saved from another pin. <a href=\"https://help.pinterest.com/article/save-pins-on-pinterest\">Learn more</a>.
     *
     * @return $this
     */
    public function setParentPinId(?string $parentPinId = null): self
    {
        $this->parentPinId = $parentPinId;

        return $this;
    }

    /**
     * Gets note.
     *
     * @return string|null
     */
    public function getNote(): ?string
    {
        return $this->note;
    }



    /**
     * Sets note.
     *
     * @param string|null $note  Private note for this Pin. <a href=\"https://help.pinterest.com/en/article/add-notes-to-your-pins\">Learn more</a>.
     *
     * @return $this
     */
    public function setNote(?string $note = null): self
    {
        $this->note = $note;

        return $this;
    }
}


