<?php
/**
 * CatalogsItemsBatchRequest
 *
 * PHP version 7.1.3
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
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
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
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the CatalogsItemsBatchRequest model.
 *
 * Request object of catalogs items batch
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CatalogsItemsBatchRequest 
{
        /**
     * @var OpenAPI\Server\Model\Country|null
     * @SerializedName("country")
     * @Assert\Type("OpenAPI\Server\Model\Country")
     * @Type("OpenAPI\Server\Model\Country")
     */
    protected $country;

    /**
     * @var OpenAPI\Server\Model\Language|null
     * @SerializedName("language")
     * @Assert\Type("OpenAPI\Server\Model\Language")
     * @Type("OpenAPI\Server\Model\Language")
     */
    protected $language;

    /**
     * @var OpenAPI\Server\Model\BatchOperation|null
     * @SerializedName("operation")
     * @Assert\Type("OpenAPI\Server\Model\BatchOperation")
     * @Type("OpenAPI\Server\Model\BatchOperation")
     */
    protected $operation;

    /**
     * Array with catalogs items
     *
     * @var OpenAPI\Server\Model\ItemBatchRecord[]|null
     * @SerializedName("items")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ItemBatchRecord")
     * })
     * @Type("array<OpenAPI\Server\Model\ItemBatchRecord>")
     */
    protected $items;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->country = isset($data['country']) ? $data['country'] : null;
        $this->language = isset($data['language']) ? $data['language'] : null;
        $this->operation = isset($data['operation']) ? $data['operation'] : null;
        $this->items = isset($data['items']) ? $data['items'] : null;
    }

    /**
     * Gets country.
     *
     * @return OpenAPI\Server\Model\Country|null
     */
    public function getCountry(): ?Country
    {
        return $this->country;
    }

    /**
     * Sets country.
     *
     * @param OpenAPI\Server\Model\Country|null $country
     *
     * @return $this
     */
    public function setCountry(Country $country = null)
    {
        $this->country = $country;

        return $this;
    }

    /**
     * Gets language.
     *
     * @return OpenAPI\Server\Model\Language|null
     */
    public function getLanguage(): ?Language
    {
        return $this->language;
    }

    /**
     * Sets language.
     *
     * @param OpenAPI\Server\Model\Language|null $language
     *
     * @return $this
     */
    public function setLanguage(Language $language = null)
    {
        $this->language = $language;

        return $this;
    }

    /**
     * Gets operation.
     *
     * @return OpenAPI\Server\Model\BatchOperation|null
     */
    public function getOperation(): ?BatchOperation
    {
        return $this->operation;
    }

    /**
     * Sets operation.
     *
     * @param OpenAPI\Server\Model\BatchOperation|null $operation
     *
     * @return $this
     */
    public function setOperation(BatchOperation $operation = null)
    {
        $this->operation = $operation;

        return $this;
    }

    /**
     * Gets items.
     *
     * @return OpenAPI\Server\Model\ItemBatchRecord[]|null
     */
    public function getItems(): ?array
    {
        return $this->items;
    }

    /**
     * Sets items.
     *
     * @param OpenAPI\Server\Model\ItemBatchRecord[]|null $items  Array with catalogs items
     *
     * @return $this
     */
    public function setItems(array $items = null)
    {
        $this->items = $items;

        return $this;
    }
}


