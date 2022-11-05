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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa045041a, "inet6_add_protocol" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8d4ac729, "xfrm_input_register_afinfo" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xabba3d11, "__icmpv6_send" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4044b6ed, "inet6_del_protocol" },
	{ 0xb85fdf63, "xfrm_input_unregister_afinfo" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "975715B74011B9D23D94754");
