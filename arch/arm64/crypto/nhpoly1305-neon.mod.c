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
	{ 0x222300bf, "crypto_nhpoly1305_init" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xa9954a26, "crypto_nhpoly1305_setkey" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x7d37efc2, "crypto_unregister_shash" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x654898cc, "crypto_register_shash" },
	{ 0x602ffb8, "crypto_nhpoly1305_update" },
	{ 0x58c6685a, "crypto_nhpoly1305_update_helper" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xf93e2404, "crypto_nhpoly1305_final" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "1877CF030C043035CC0BD10");
