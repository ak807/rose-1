// Documentation for ROSETTA-generated things that don't have their own source files


/** @class SgAsmValueExpression
 *  Assembly operands that contain numeric values.
 *
 *  Assembly instruction (SgAsmInstruction) operands are represented by SgAsmExpression nodes in the AST. If the expression has
 *  a numeric value then an SgAsmValueExpression is used, which is a subclass of SgAsmExpression.
 * 
 *  Values of various types (integers and floating-point values of various sizes) are represented by subclasses of
 *  SgAsmValueExpression.
 */

/** @var unsigned short SgAsmValueExpression::p_bit_offset
 *  The bit position of the value in the instruction encoding.
 *  
 *  If a numeric constant comes directly from an instruction encoding, then the p_bit_size attribute will be non-zero and the
 *  p_bit_offset will contain the index for the first bit of the constant.
 *  
 *  Bits are numbered so that bits zero through seven are in the first byte, bits eight through 15 are in the second byte,
 *  etc. Within a byte, bits are numbered so that lower indexes are less significant bits. In other words, given bit index N
 *  and an array of bytes, the particular bit value is:
 *  
 * @code
 *  SgUnsignedCharList bytes;
 *  unsigned short index;
 *  bool bit = (bytes[index/8] & (1<<(index%8))) ? true : false;
 * @endcode
 */

/** @var unsigned short SgAsmValueExpression::p_bit_size
 *  The size of the value in the instruction encoding.
 *  
 *  If a numeric constant comes directly from an instruction encoding, then the p_bit_size attribute will be non-zero and
 *  indicate the number of bits used to represent the constant in the encoding.
 *  
 *  @sa SgAsmValueExpression::p_bit_offset
 */

/** @fn unsigned short SgAsmValueExpression::get_bit_offset() const
 *  Accessor for SgAsmValueExpression::p_bit_offset */

/** @fn unsigned short SgAsmValueExpression::get_bit_size() const
 * Accessor for SgAsmValueExpression::p_bit_size */
