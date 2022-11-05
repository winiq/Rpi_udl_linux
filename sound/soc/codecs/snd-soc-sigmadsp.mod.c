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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdd0f4668, "snd_ctl_notify" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xce807a25, "up_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "D32C9615026D568F3FCC116");
