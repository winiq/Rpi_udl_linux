cmd_crypto/built-in.a := echo >/dev/null; rm -f crypto/built-in.a; aarch64-linux-gnu-ar cDPrST crypto/built-in.a crypto/api.o crypto/cipher.o crypto/compress.o crypto/algapi.o crypto/scatterwalk.o crypto/proc.o crypto/aead.o crypto/geniv.o crypto/skcipher.o crypto/ahash.o crypto/shash.o crypto/akcipher.o crypto/kpp.o crypto/dh.o crypto/dh_helper.o crypto/rsapubkey.asn1.o crypto/rsaprivkey.asn1.o crypto/rsa.o crypto/rsa_helper.o crypto/rsa-pkcs1pad.o crypto/acompress.o crypto/scompress.o crypto/algboss.o crypto/testmgr.o crypto/crypto_null.o crypto/sha1_generic.o crypto/sha256_generic.o crypto/sha512_generic.o crypto/sha3_generic.o crypto/sm3_generic.o crypto/ecb.o crypto/cts.o crypto/xts.o crypto/des_generic.o crypto/aes_generic.o crypto/deflate.o crypto/crc32c_generic.o crypto/crc32_generic.o crypto/crct10dif_common.o crypto/crct10dif_generic.o crypto/lzo.o crypto/lzo-rle.o crypto/rng.o crypto/asymmetric_keys/built-in.a crypto/hash_info.o