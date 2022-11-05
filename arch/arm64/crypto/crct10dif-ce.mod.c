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
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x1cc0feea, "crypto_register_shashes" },
	{ 0x7d37efc2, "crypto_unregister_shash" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x654898cc, "crypto_register_shash" },
	{ 0x765ff474, "crc_t10dif_generic" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x8a61612a, "crypto_unregister_shashes" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:*:feature:*0001*");

MODULE_INFO(srcversion, "9903EE6C66897DE34AC0B6A");
