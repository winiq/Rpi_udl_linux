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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0xd56699f0, "snd_pcm_hw_constraint_integer" },
	{ 0x432ef100, "dma_get_slave_caps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xe5414208, "__dma_request_channel" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x942cefb4, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "BDF05ADCF01FDE22C7C0449");
