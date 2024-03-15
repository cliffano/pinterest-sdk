<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * @DTA\Strategy(name="ObjectList", options={"type":\App\DTO\TrendingKeywordsResponseTrendsInner::class})
 * @DTA\Validator(name="Collection", options={"validators":{
 *     {"name":"TypeCompliant", "options":{"type":\App\DTO\TrendingKeywordsResponseTrendsInner::class}}
 * }})
 */
class Collection164 extends \ArrayObject
{
}
