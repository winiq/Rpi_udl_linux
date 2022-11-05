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
	{ 0xd575022a, "inet_del_protocol" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x87011638, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x86ce8df8, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAADDD31CCE61A2B7418302");
