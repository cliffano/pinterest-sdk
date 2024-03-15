<?php
/**
 * CatalogsProductGroupFiltersAnyOf
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
 * Class representing the CatalogsProductGroupFiltersAnyOf model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsProductGroupFiltersAnyOf 
{
        /**
     * @var CatalogsProductGroupFilterKeys[]|null
     * @SerializedName("any_of")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupFilterKeys")
     * })
     * @Type("array<OpenAPI\Server\Model\CatalogsProductGroupFilterKeys>")
     */
    protected ?array $anyOf = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->anyOf = array_key_exists('anyOf', $data) ? $data['anyOf'] : $this->anyOf;
        }
    }

    /**
     * Gets anyOf.
     *
     * @return CatalogsProductGroupFilterKeys[]|null
     */
    public function getAnyOf(): ?array
    {
        return $this->anyOf;
    }



    /**
     * Sets anyOf.
     *
     * @param CatalogsProductGroupFilterKeys[]|null $anyOf
     *
     * @return $this
     */
    public function setAnyOf(?array $anyOf): self
    {
        $this->anyOf = $anyOf;

        return $this;
    }
}


