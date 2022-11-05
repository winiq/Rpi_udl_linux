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
	{ 0x1d77b0f8, "unix_socket_table" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xad0f2b6c, "unix_table_lock" },
	{ 0xd17ad3ea, "sock_diag_put_meminfo" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xfc51aef, "sock_diag_unregister" },
	{ 0xb91f03d1, "sock_i_ino" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x34df43d0, "sock_diag_register" },
	{ 0xd367601c, "nla_put" },
	{ 0x5eb4ce68, "unix_peer_get" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa8737324, "unix_inq_len" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcdf7e1b1, "sock_diag_check_cookie" },
	{ 0xde162b61, "unix_outq_len" },
	{ 0x98c37d6d, "sock_diag_save_cookie" },
	{ 0x8faa70ae, "nla_reserve" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xef4feda1, "sock_i_uid" },
	{ 0xcbdda75c, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0BBB00A353EAF60C8D8193");
