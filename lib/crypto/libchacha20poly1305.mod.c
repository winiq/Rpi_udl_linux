#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x6ddf27bc, "poly1305_update_arch" },
	{ 0xdc94f829, "chacha_init_arch" },
	{ 0xdd8ec6bd, "hchacha_block_arch" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5a3a4d92, "sg_miter_start" },
	{ 0xd8886fa0, "sg_miter_stop" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x1c3e6e5b, "poly1305_init_arch" },
	{ 0xdb89dd8d, "sg_miter_next" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x220b49ab, "chacha_crypt_arch" },
	{ 0xf39f5240, "poly1305_final_arch" },
};

MODULE_INFO(depends, "poly1305-neon,chacha-neon");


MODULE_INFO(srcversion, "880F127E6893E33D1D163FD");
