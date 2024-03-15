<?php
/**
 * CatalogsHotelProductGroupFiltersAllOf
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
 * Class representing the CatalogsHotelProductGroupFiltersAllOf model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsHotelProductGroupFiltersAllOf 
{
        /**
     * @var CatalogsHotelProductGroupFilterKeys[]|null
     * @SerializedName("all_of")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\CatalogsHotelProductGroupFilterKeys")
     * })
     * @Type("array<OpenAPI\Server\Model\CatalogsHotelProductGroupFilterKeys>")
     */
    protected ?array $allOf = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->allOf = array_key_exists('allOf', $data) ? $data['allOf'] : $this->allOf;
        }
    }

    /**
     * Gets allOf.
     *
     * @return CatalogsHotelProductGroupFilterKeys[]|null
     */
    public function getAllOf(): ?array
    {
        return $this->allOf;
    }



    /**
     * Sets allOf.
     *
     * @param CatalogsHotelProductGroupFilterKeys[]|null $allOf
     *
     * @return $this
     */
    public function setAllOf(?array $allOf): self
    {
        $this->allOf = $allOf;

        return $this;
    }
}


