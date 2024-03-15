<?php
/**
 * AudienceUpdateRequest
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
 * Class representing the AudienceUpdateRequest model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AudienceUpdateRequest 
{
        /**
     * Ad account ID.
     *
     * @var string|null
     * @SerializedName("ad_account_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $adAccountId = null;

    /**
     * Audience name.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * @var AudienceRule|null
     * @SerializedName("rule")
     * @Assert\Type("OpenAPI\Server\Model\AudienceRule")
     * @Type("OpenAPI\Server\Model\AudienceRule")
     */
    protected ?AudienceRule $rule = null;

    /**
     * Audience description.
     *
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $description = null;

    /**
     * @var AudienceUpdateOperationType|null
     * @SerializedName("operation_type")
        * @Accessor(getter="getSerializedOperationType")
        * @Type("string")
     */
    protected ?AudienceUpdateOperationType $operationType = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->adAccountId = array_key_exists('adAccountId', $data) ? $data['adAccountId'] : $this->adAccountId;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->rule = array_key_exists('rule', $data) ? $data['rule'] : $this->rule;
            $this->description = array_key_exists('description', $data) ? $data['description'] : $this->description;
            $this->operationType = array_key_exists('operationType', $data) ? $data['operationType'] : $this->operationType;
        }
    }

    /**
     * Gets adAccountId.
     *
     * @return string|null
     */
    public function getAdAccountId(): ?string
    {
        return $this->adAccountId;
    }



    /**
     * Sets adAccountId.
     *
     * @param string|null $adAccountId  Ad account ID.
     *
     * @return $this
     */
    public function setAdAccountId(?string $adAccountId = null): self
    {
        $this->adAccountId = $adAccountId;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Audience name.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets rule.
     *
     * @return AudienceRule|null
     */
    public function getRule(): ?AudienceRule
    {
        return $this->rule;
    }



    /**
     * Sets rule.
     *
     * @param AudienceRule|null $rule
     *
     * @return $this
     */
    public function setRule(?AudienceRule $rule = null): self
    {
        $this->rule = $rule;

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
     * @param string|null $description  Audience description.
     *
     * @return $this
     */
    public function setDescription(?string $description = null): self
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets operationType.
     *
     * @return AudienceUpdateOperationType|null
     */
    public function getOperationType(): ?AudienceUpdateOperationType
    {
        return $this->operationType;
    }

    /**
    * Gets operationType for serialization.
    *
    * @return string|null
    */
    public function getSerializedOperationType(): string|null
    {
        return $this->operationType?->value ? (string) $this->operationType->value : null;
    }


    /**
     * Sets operationType.
     *
     * @param AudienceUpdateOperationType|null $operationType
     *
     * @return $this
     */
    public function setOperationType(?AudienceUpdateOperationType $operationType = null): self
    {
        $this->operationType = $operationType;

        return $this;
    }
}


