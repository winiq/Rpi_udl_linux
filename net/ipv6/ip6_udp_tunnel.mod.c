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
	{ 0xcdeede81, "release_sock" },
	{ 0xa0fd87b6, "udp6_set_csum" },
	{ 0xef4346d9, "sock_bindtoindex" },
	{ 0xf8d5f58c, "sock_release" },
	{ 0xe742e84a, "sock_create_kern" },
	{ 0x1f003f7a, "kernel_connect" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x106c9f0d, "kernel_bind" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F50A9632EDFF8B1C88BAE3");
