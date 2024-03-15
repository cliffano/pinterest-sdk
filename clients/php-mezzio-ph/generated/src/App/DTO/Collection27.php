<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * @DTA\Strategy(name="ObjectList", options={"type":\App\DTO\TargetingSpecSHOPPINGRETARGETING::class})
 * @DTA\Validator(name="Collection", options={"validators":{
 *     {"name":"TypeCompliant", "options":{"type":\App\DTO\TargetingSpecSHOPPINGRETARGETING::class}}
 * }})
 */
class Collection27 extends \ArrayObject
{
}
