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
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd4671463, "xor_block_inner_neon" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0xbb53dfef, "cpu_hwcaps" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "xor-neon");


MODULE_INFO(srcversion, "A4AC088027BB38702BBF9A9");
